import javafx.application.Application;
import javafx.stage.Stage;

public class Test1 extends Application{
	public Test1(){
		System.out.println("Test Constructor is invoked");
	}
	@Override
	public void start(Stage primaryStage){
		System.out.println("start method is invoked");
	}
	public static void main(String[] args){
		System.out.println("Start application");
		Application.launch(args);
	}
	
}