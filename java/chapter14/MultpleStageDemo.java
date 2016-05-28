import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.stage.Stage;

public class MultpleStageDemo extends Application{
	@Override//overrides the start method in application class
	public void start(Stage primaryStage){
		//creates a scene and places a button in it
		Scene scene=new Scene(new Button("OK"),200,250);
		primaryStage.setTitle("MyJavaFX");//sets the stage title
		primaryStage.setScene(scene);//place the scene in the stage
		primaryStage.show();//display the stage
		
		Stage stage=new Stage();//created a new stage
		stage.setTitle("Second stage");//set the title for new stage
		//set the stage with a button in it
		stage.setScene(new Scene(new Button("New Stage"),100,100));
		stage.show();//display the stage
	}
	public static void main(String[] args){
		Application.launch(args);
	}
}
