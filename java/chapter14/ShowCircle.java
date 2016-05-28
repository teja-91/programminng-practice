import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;

public class ShowCircle extends Application{
	@Override //overrides the start method in the application class
	public void start(Stage primaryStage){
		//create a circle with the desired properties
		Circle circle = new Circle();
		circle.setCenterX(100);
		circle.setCenterY(100);
		circle.setRadius(50);
		circle.setStroke(Color.BLACK);
		circle.setFill(Color.WHITE);
		//create a pane
		Pane pane = new Pane();
		pane.getChildren().add(circle);
		//create a scene and place it in the stage
		Scene scene = new Scene(pane,200,200);
		primaryStage.setTitle("ShowCircle");//set title for the stage
		primaryStage.setScene(scene);//set the scene for the stage
		primaryStage.show();//display the stage
	}
	public static void main(String[] args){
		Application.launch(args);
	}
	
}
