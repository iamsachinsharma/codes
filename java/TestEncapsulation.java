class Encapsulate {
	private String Name;
	private int Roll;
	private int Age;

	public int getAge() {
		return Age;
	}
	public String getName() {
		return Name;
	}
	public int getRoll() {
		return Roll;
	}
	public void setAge(int newAge) {
		Age = newAge;
	}
	public void setName(String newName) {
		Name = newName;
	}
	public void setRoll(int newRoll) {
		Roll = newRoll;
	}
}
public class TestEncapsulation {
	public static void main(String[] args) {
		Encapsulate obj = new Encapsulate();
		obj.setName("Sachin");
		obj.setAge(20);
		obj.setRoll(43);
		System.out.println("Name: " + obj.getName());
		System.out.println("Age: " + obj.getAge());
		System.out.println("Roll: " + obj.getRoll());

	}
}
