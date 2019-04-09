import java.awt.*;
import javax.swing.*;
public class ClassEdit {

	private JFrame frame;
	private JTextField input2;
	private JTextField input1;
	private JTextField output;

	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					ClassEdit window = new ClassEdit();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
	public ClassEdit() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setBackground(new Color(128, 0, 0));
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Name : ");
		lblNewLabel.setForeground(new Color(224, 255, 255));
		lblNewLabel.setBounds(43, 38, 86, 19);
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 14));
		frame.getContentPane().add(lblNewLabel);
		
		JTextArea textArea = new JTextArea();
		textArea.setBounds(213, 35, -63, 22);
		frame.getContentPane().add(textArea);
		
		JLabel lblNewLabel_1 = new JLabel("Salary :");
		lblNewLabel_1.setForeground(new Color(224, 255, 255));
		lblNewLabel_1.setBounds(43, 85, 86, 22);
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		frame.getContentPane().add(lblNewLabel_1);
		
		input2 = new JTextField();
		input2.setBounds(139, 88, 223, 20);
		frame.getContentPane().add(input2);
		input2.setColumns(10);
		
		input1 = new JTextField();
		input1.setBounds(139, 39, 223, 20);
		frame.getContentPane().add(input1);
		input1.setColumns(10);
		
		JButton btnNewButton = new JButton("CALCULATION");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try{
					int num1,total;
				String name;
					num1=Integer.parseInt(input2.getText());
					name=input1.getText();
					total=num1*12;
					output.setText(name+" "+ "annual income is"+" "+ total + " "+ "$");
			}
			catch (Exception e1){
				JOptionPane.showMessageDialog(null,"Please Enter Valid Number.");	
			}
			
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 12));
		btnNewButton.setBounds(189, 132, 129, 23);
		frame.getContentPane().add(btnNewButton);
		
		JLabel lblNewLabel_2 = new JLabel("Display box :");
		lblNewLabel_2.setForeground(new Color(224, 255, 255));
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_2.setBounds(25, 187, 93, 19);
		frame.getContentPane().add(lblNewLabel_2);
		
		output = new JTextField();
		output.setFont(new Font("Dubai Medium", Font.PLAIN, 13));
		output.setForeground(new Color(0, 0, 0));
		output.setBounds(128, 187, 285, 20);
		frame.getContentPane().add(output);
		output.setColumns(10);
	}
}
