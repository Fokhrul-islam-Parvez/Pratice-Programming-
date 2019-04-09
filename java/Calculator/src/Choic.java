import java.awt.*;
import java.applet.*;
import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JFormattedTextField;
import javax.swing.JList;
import javax.swing.JTextPane;
import javax.swing.JTextField;
import javax.swing.JComboBox;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.JButton;
import java.awt.TextField;
import java.awt.Choice;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Choic {

	private JFrame frame;
	private JTextField output;
	protected Object input1;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Choic window = new Choic();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public Choic() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setFont(new Font("Tahoma", Font.BOLD, 13));
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Choice :");
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 16));
		lblNewLabel.setBounds(109, 52, 80, 20);
		frame.getContentPane().add(lblNewLabel);
		
		JButton btnNewButton = new JButton("Cho");
		btnNewButton.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e) {
					
			}
		});
		btnNewButton.setBounds(145, 113, 89, 23);
		frame.getContentPane().add(btnNewButton);
		
		Choice input1 = new Choice();
		input1.setForeground(new Color(128, 0, 0));
		input1.setBackground(new Color(255, 255, 255));
		input1.addItem("Parvez");
		input1.addItem("Paru");
		input1.addItem("Mun");
		input1.addItem("Saru");
		input1.addItem("Inder");
		input1.setBounds(211, 52, 159, 20);
		frame.getContentPane().add(input1);
		
		output = new JTextField();
		output.setBounds(66, 196, 307, 20);
		frame.getContentPane().add(output);
		output.setColumns(10);
	}
}
