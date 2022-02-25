abstract class puppy {
    abstract void makeSound();

    public void eat() {
        System.out.println("I can eat.");
    }
}

class Cow extends puppy {
    // provide implementation of abstract method
    public void makeSound() {
        System.out.println("Bark bark");
    }
}

class Maximum {
    public static void main(String[] args) {
        // create an object of Dog class
        Cow d1 = new Cow();
        d1.makeSound();
        d1.eat();
    }
}