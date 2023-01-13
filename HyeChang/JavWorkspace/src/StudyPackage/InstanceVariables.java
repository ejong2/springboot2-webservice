package StudyPackage;
public class InstanceVariables {
    public static void main(String[] args) {

        BlackBox b1 = new BlackBox();
        b1.color = "white";
        b1.modelName = "블랙박스1";
        b1.price = 200000;
        b1.resolution = "FHD";

        System.out.println(b1.color);
        System.out.println(b1.modelName);
        System.out.println(b1.price);
        System.out.println(b1.resolution);

        System.out.println("------------------------");

        BlackBox b2 = new BlackBox();
        b2.color = "black";
        b2.modelName = "블랙박스2";
        b2.price = 400000;
        b2.resolution = "QHD";

        System.out.println(b2.color);
        System.out.println(b2.modelName);
        System.out.println(b2.price);
        System.out.println(b2.resolution);

    }
}
