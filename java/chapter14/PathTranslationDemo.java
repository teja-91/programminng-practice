import javafx.animation.PathTransition;
import javafx.animation.Timeline;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;
import javafx.util.Duration;

public class PathTranslationDemo extends Application{
	@Override
	public void start(Stage primaryStage){
		Pane pane = new Pane();
		Rectangle rectangle = new Rectangle(0,0,25,50);
		rectangle.setFill(Color.ORANGE);
		
		Circle circle = new Circle(125,100,50);
		circle.setFill(Color.WHITE);
		circle.setStroke(Color.BLACK);
		
		pane.getChildren().add(circle);
		pane.getChildren().add(rectangle);
		
		PathTransition pt = new PathTransition();
		pt.setPath(circle);
		pt.setNode(rectangle);
		pt.setOrientation(
		PathTransition.OrientationType.ORTHOGONAL_TO_TANGENT);
		pt.setCycleCount(Timeline.INDEFINITE);
		pt.setAutoReverse(true);
		pt.play();
		
		circle.setOnMousePressed(e -> pt.pause());
		circle.setOnMouseReleased(e -> pt.play());
		Scene scene = new Scene(pane,400,400);
		primaryStage.setTitle("PathTranslationDemo");
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	public static void main(String[] args){
			Application.launch(args);
	}
}
