import javafx.application.Application;
import javafx.scene.Scene;
import javafx.stage.Stage;
import javafx.geometry.Pos;
import javafx.scene.layout.HBox;
import javafx.scene.control.Button;
import javafx.event.ActionEvent;
public class LambdahandlerDemo extends Application{
	@Override
	public void start(Stage primaryStage){
		HBox hBox = new HBox();
		hBox.setSpacing(10);
		hBox.setAlignment(Pos.CENTER);
		Button btNew = new Button("New");
		Button btOpen = new Button("Open");
		Button btSave = new Button("Save");
		Button btPrint = new Button("Print");
		hBox.getChildren().addAll(btNew,btOpen,btSave,btPrint);
		//create and register handler
		btNew.setOnAction((ActionEvent e)->{
			System.out.println("Process New");
		});//lambda handler
		btOpen.setOnAction((ActionEvent e)->{
			System.out.println("Process Open");
		});
		btSave.setOnAction((ActionEvent e)->{
			System.out.println("Process Save");
		});
		btPrint.setOnAction((ActionEvent e)->{
			System.out.println("Process Print");
		});
		//create a scene and place it in stage
		Scene scene = new Scene(hBox,300,50);
		primaryStage.setTitle("LambdsHandlerDemo");
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	public static void main(String[] args){
		Application.launch(args);
	}
}