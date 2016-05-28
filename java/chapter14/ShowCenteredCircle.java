import javafx.application.Application;
import javafx.scene.Scene;
import javafx.stage.Stage;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;

public class ShowCenteredCircle extends Application{
	@Override//overrides the start method in applicaiton class
	public void start(Stage primaryStage){
		//create a pane to hold the circle
		Pane pane = new Pane();
		//create a circle
		Circle circle = new Circle();
		circle.centerXProperty().bind(pane.widthProperty().divide(2));
		circle.centerYProperty().bind(pane.heightProperty().divide(2));
		circle.setRadius(50);
		circle.setStroke(Color.BLACK);
		circle.setFill(Color.WHITE);
		pane.getChildren().add(circle);//add circle to the pane
		//create a scene and place it in the stage
		Scene scene = new Scene(pane,200,200);
		primaryStage.setTitle("ShowCenteredCircle");
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	public static void main(String[] args){
		Application.launch();
	}
	
}