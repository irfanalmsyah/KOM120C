import java.util.Scanner;
import java.util.ArrayList;
import java.util.Comparator;

abstract class Train {
    protected Integer power;
    public Train(Integer p) {
        power = p;
    }
    
    public Integer getPower() {
        return power;
    }
    
    abstract public Integer train(Integer current);
}

class Warrior extends Train {
    public Warrior(Integer p) {
        super(p);
    }
    
    public Integer train(Integer current) {
        return current + power;
    }
}

class Wizard extends Train  {
    public Wizard(Integer p) {
        super(p);
    }
    
    public Integer train(Integer current) {
        return current * power;
    }
}

class Kingdom {
    Scanner sc = new Scanner(System.in);
    ArrayList<Warrior> warriors = new ArrayList<>();
    Wizard maxWizard = new Wizard(0);
    int current;
    int trainerCount;
    int deadline;
    int maximumPossible;

    Comparator<Train> comparator = new Comparator<Train>() {
        @Override
        public int compare(Train o1, Train o2) {
            return o2.getPower().compareTo(o1.getPower());
        }
    };

    public Kingdom() {
        current = sc.nextInt();
        trainerCount = sc.nextInt();
        deadline = sc.nextInt();
    }

    void addTrainers() {
        for (int i = 0; i < trainerCount; i++) {
            int trainerType = sc.nextInt();
            int power = sc.nextInt();
            if (trainerType == 0) {
                warriors.add(new Warrior(power));
            } else {
                if (power > maxWizard.getPower()) {
                    maxWizard = new Wizard(power);
                }
            }
        }
        warriors.sort(comparator);
    }

    void train() {
        int warriorIndex = 0;
        while (deadline-- != 1) {
            if (warriorIndex < warriors.size()) {
                current = warriors.get(warriorIndex).train(current);
                warriorIndex++;
            }
        }
        if (warriorIndex < warriors.size()) {
            if (maxWizard.train(current) > warriors.get(warriorIndex).train(current)) {
                current = maxWizard.train(current);
            } else {
                current = warriors.get(warriorIndex).train(current);
            }
        } else {
            if (maxWizard.power > 0) {
                current = maxWizard.train(current);
            }
        }
    }

    void print() {
        System.out.println(current);
    }
}

public class MagicBattle {
    public static void main(String[] args) {
        Kingdom kingdom = new Kingdom();
        kingdom.addTrainers();
        kingdom.train();
        kingdom.print();
    }
}
