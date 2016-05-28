import javafx.application.Application;
import javafx.scene.Scene;
import javafx.stage.Stage;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.geometry.Insets;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;

public class ShowImage extends Application{
	@Override//overrides the start method in Application class
	public void start(Stage primaryStage){
		Pane pane = new HBox(10);//create a pane
		pane.setPadding(new Insets(5,5,5,5));
		Image img = new Image("india.gif");//loads the image india.gif
		pane.getChildren().add(new ImageView(img));//creates an imageview object from the image 
		//creates a different imageview object 
		ImageView imgview1 = new ImageView(img);
		imgview1.setFitHeight(100);
		imgview1.setFitWidth(100);
		pane.getChildren().add(imgview1);//add the image view to the pane
		//creates a different imageview object 
		ImageView imgView2 = new ImageView(img);
		imgView2.setRotate(-45);
		pane.getChildren().add(imgView2);//add the imageview to the pane
		
		Scene scene = new Scene(pane);//create a scene for pane
		primaryStage.setScene(scene);//set the scene for the primary Stage
		primaryStage.setTitle("ShowImage");//set the title
		primaryStage.show();//show image
	}
	public static void main(String[] args){
		Application.launch(args);
	}
}