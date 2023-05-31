import java.util.Scanner;

interface AritmatikaDasar {
    double tambah(double a, double b);
    double kurang(double a, double b);
    double kali(double a, double b);
    double bagi(double a, double b);
}

interface AritmatikaLanjut {
    double akarKuadrat(double a);
    double pangkat(double a, double b);
}

interface KalkulatorSaintifik extends AritmatikaDasar, AritmatikaLanjut {
    void clear();
}

class Kalkulator implements KalkulatorSaintifik {
    private double currentValue;

    public Kalkulator() {
        currentValue = 0; 
    }

    public double tambah(double a, double b) {
        currentValue = a + b;
        print();
        return currentValue;
    }

    public double kurang(double a, double b) {
        currentValue = a - b;
        print();
        return currentValue;
    }
    public double kali(double a, double b) {
        currentValue = a * b;
        print();
        return currentValue;
    }
    public double bagi(double a, double b) {
        currentValue = a / b;
        print();
        return currentValue;
    }
    public double akarKuadrat(double a) {
        currentValue = Math.sqrt(a);
        print();
        return currentValue;
    }
    public double pangkat(double a, double b) {
        currentValue = Math.pow(a,b);
        print();
        return currentValue;
    }
    public void clear() {
        currentValue = 0;
        print();
    }
    public void print() {
        System.out.printf("%.2f\n", currentValue);
    }
    public double getCurrentValue() {
        return currentValue;
    }
}

public class CalculatorManager {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Kalkulator kalkulator = new Kalkulator();
        String operator = sc.next();
        while (!operator.equals("~")) {
            if (operator.equals("+")) {
                double b = sc.nextDouble();
                kalkulator.tambah(kalkulator.getCurrentValue(), b);
            } else if (operator.equals("-")) {
                double b = sc.nextDouble();
                kalkulator.kurang(kalkulator.getCurrentValue(), b);
            } else if (operator.equals("*")) {
                double b = sc.nextDouble();
                kalkulator.kali(kalkulator.getCurrentValue(), b);
            } else if (operator.equals("/")) {
                double b = sc.nextDouble();
                kalkulator.bagi(kalkulator.getCurrentValue(), b);
            } else if (operator.equals("#")) {
                kalkulator.akarKuadrat(kalkulator.getCurrentValue());
            } else if (operator.equals("^")) {
                double b = sc.nextDouble();
                kalkulator.pangkat(kalkulator.getCurrentValue(), b);
            } else if (operator.equals("C")) {
                kalkulator.clear();
            }
            operator = sc.next();
        }
    }
}
