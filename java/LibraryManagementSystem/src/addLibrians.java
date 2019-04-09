import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JButton;
import java.awt.Font;
import javax.swing.JTextField;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class addLibrians extends JFrame {

	private JPanel contentPane;
	private JTextField lname;
	private JTextField lid;
	private JTextField lpassword;
	private JTextField lemail;
	private JTextField laddress;
	private JTextField lcity;
	private JTextField lphn;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					addLibrians frame = new addLibrians();
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
	public addLibrians() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 475, 418);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Name :");
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel.setBounds(23, 47, 76, 14);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("ID :");
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_1.setBounds(23, 72, 64, 14);
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Email :");
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_2.setBounds(23, 136, 76, 14);
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("Address :");
		lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_3.setBounds(23, 167, 76, 14);
		contentPane.add(lblNewLabel_3);
		
		JLabel lblNewLabel_4 = new JLabel("City :");
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_4.setBounds(23, 198, 76, 14);
		contentPane.add(lblNewLabel_4);
		
		JLabel lblNewLabel_5 = new JLabel("Contact No :");
		lblNewLabel_5.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_5.setBounds(23, 229, 89, 14);
		contentPane.add(lblNewLabel_5);
		
		JLabel lblNewLabel_6 = new JLabel("Password :");
		lblNewLabel_6.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_6.setBounds(23, 105, 76, 14);
		contentPane.add(lblNewLabel_6);
		
		JButton btnNewButton = new JButton("Add Librian");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String name,id,password,email,address,city,phn;
				name=lname.getText();
				id=lid.getText();
				password=lpassword.getText();
				email=lemail.getText();
				address=laddress.getText();
				city=lcity.getText();
				phn=lphn.getText();
				linfoSaveFile save=new linfoSaveFile(name,id,password,email,address,city,phn);
				save.saveFile();
				JOptionPane.showMessageDialog(null, "Librarian Add Successfull");
				lname.setText("");
				lid.setText("");
				lpassword.setText("");
				lemail.setText("");
				laddress.setText("");
				lcity.setText("");
				lphn.setText("");
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 15));
		btnNewButton.setBounds(141, 286, 165, 23);
		contentPane.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("Back");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				mainmenu menu=new mainmenu();
				menu.setVisible(true);
				dispose();
				
			}
		});
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 15));
		btnNewButton_1.setBounds(141, 331, 165, 23);
		contentPane.add(btnNewButton_1);
		
		lname = new JTextField();
		lname.setBounds(199, 37, 228, 20);
		contentPane.add(lname);
		lname.setColumns(10);
		
		lid = new JTextField();
		lid.setBounds(199, 70, 228, 20);
		contentPane.add(lid);
		lid.setColumns(10);
		
		lpassword = new JTextField();
		lpassword.setBounds(199, 103, 228, 20);
		contentPane.add(lpassword);
		lpassword.setColumns(10);
		
		lemail = new JTextField();
		lemail.setBounds(199, 134, 228, 20);
		contentPane.add(lemail);
		lemail.setColumns(10);
		
		laddress = new JTextField();
		laddress.setBounds(199, 165, 228, 20);
		contentPane.add(laddress);
		laddress.setColumns(10);
		
		lcity = new JTextField();
		lcity.setBounds(199, 196, 228, 20);
		contentPane.add(lcity);
		lcity.setColumns(10);
		
		lphn = new JTextField();
		lphn.setBounds(199, 227, 228, 20);
		contentPane.add(lphn);
		lphn.setColumns(10);
	}
}
