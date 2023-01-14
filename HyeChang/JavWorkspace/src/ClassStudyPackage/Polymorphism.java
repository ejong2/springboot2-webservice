package ClassStudyPackage;

import ClassStudyPackage.Camera.Camera;
import ClassStudyPackage.Camera.FactoryCam;
import ClassStudyPackage.Camera.SpeedCam;

public class Polymorphism {
    public static void main(String[] args) {
        // 다형성
        Camera camera = new Camera();
        Camera factoryCam = new FactoryCam();
        Camera speedCam = new SpeedCam();

        camera.showMainFeature();
        factoryCam.showMainFeature();
        speedCam.showMainFeature();
        System.out.println("---------------------");

        Camera[] cameras = new Camera[3];
        cameras[0] = new Camera();
        cameras[1] = new FactoryCam();
        cameras[2] = new SpeedCam();

        for(Camera cam : cameras){
            cam.showMainFeature();
        }
        System.out.println("---------------------");

//        factoryCam.detectFire();
//        speedCam.checkSpeed();
//        speedCam.recognizeLicensePlate();

        if(camera instanceof Camera){
            System.out.println("카메라입니다.");
        }
        if(factoryCam instanceof FactoryCam){
            ((FactoryCam)factoryCam).detectFire();
        }
        if(speedCam instanceof SpeedCam){
            ((SpeedCam) speedCam).checkSpeed();

            Object[] objects = new Object[3];
            objects[0] = new Camera();
            objects[1] = new FactoryCam();
            objects[2] = new SpeedCam();
        }
    }
}
