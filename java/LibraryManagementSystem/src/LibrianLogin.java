import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.Font;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JPasswordField;

public class LibrianLogin extends JFrame {

	private JPanel lib;
	private JTextField sid;
	private JPasswordField pass;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					LibrianLogin frame = new LibrianLogin();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public LibrianLogin() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		lib = new JPanel();
		lib.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(lib);
		lib.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Librian Login Form");
		lblNewLabel.setBounds(97, 11, 235, 31);
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 20));
		lib.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Enter ID :");
		lblNewLabel_1.setBounds(31, 97, 75, 14);
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 13));
		lib.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Enter Password :");
		lblNewLabel_2.setBounds(29, 141, 125, 14);
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 13));
		lib.add(lblNewLabel_2);
		
		sid = new JTextField();
		sid.setBounds(194, 95, 185, 20);
		lib.add(sid);
		sid.setColumns(10);
		
		JButton btnNewButton = new JButton("Login");
		btnNewButton.setBounds(179, 198, 89, 23);
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String id=sid.getText();
			    String password=pass.getText();
				if(id.compareTo("162-35-1700")==0 && password.compareTo("parvez")==0)
				{
					Smainmenu menu= new Smainmenu();
					menu.setVisible(true);
					dispose();
				}
				else
				{
					JOptionPane.showMessageDialog(null, "Invalid ID or Password");

				}
					
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 15));
		lib.add(btnNewButton);
		
		pass = new JPasswordField();
		pass.setBounds(194, 139, 185, 20);
		lib.add(pass);
	}
}
