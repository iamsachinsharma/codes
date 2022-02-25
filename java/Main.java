class Mobile {
    String mob;

    Mobile() {
        mob = "Iphone";
    }

    public String getProperties() {
        return mob;
    }

    public static void main(String[] args) {
        Mobile m = new Mobile();
        System.out.println("Mobile: " + m.getProperties());
    }
}