import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class KeyEventDemo extends Application{
	@Override
	public void start(Stage primaryStage){
	Pane pane = new Pane();
	Text text = new Text(20,20,"A");
	pane.getChildren().add(text);
	text.setOnKeyPressed(e -> {
		System.out.println("Key Pressed : "+ e.getText());
		switch(e.getCode()){
				case DOWN : text.setY(text.getY()+10);break;
				case UP : text.setY(text.getY()-10);break;
				case LEFT : text.setX(text.getX()-10);break;
				case RIGHT : text.setX(text.getX()+10);break;
				default:
						if(Character.isLetterOrDigit(e.getText().charAt(0)))
							text.setText(e.getText());
		}		
	});
	
	//create scene
	Scene scene =new Scene(pane);
	primaryStage.setTitle("KeyEventDemo");
	primaryStage.setScene(scene);
	primaryStage.show();
	text.requestFocus();//text is focused to receive key input
	}
	public static void main(String[] args){
		Application.launch(args);
	}
}