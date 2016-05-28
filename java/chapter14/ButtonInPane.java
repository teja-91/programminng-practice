import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.stage.Stage;
import javafx.scene.layout.StackPane;

public class ButtonInPane extends Application{
	@Override// overrides the start method in the Application class
	public void start(Stage primaryStage){
		//create a scene and place a button in the scene
		StackPane pane = new StackPane();
		pane.getChildren().add(new Button("OK"));
		Scene scene = new Scene(pane,200,50);
		primaryStage.setTitle("Button in a pane");//set the title of the stage
		primaryStage.setScene(scene);//place the scene in the stage
		primaryStage.show();//display the stage
	}
	public static void main(String[] args){
		Application.launch(args);
	}
}