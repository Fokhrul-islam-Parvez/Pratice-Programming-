import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import java.awt.Font;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.awt.event.ActionEvent;
import javax.swing.JComboBox;
import javax.swing.DefaultComboBoxModel;
import javax.swing.ImageIcon;
import java.awt.Color;

public class LaddBook  extends Javaconnect { //extends JFrame {
	static JFrame jf=new JFrame("New Book");
//	 Connection conn;
//	    ResultSet rs;
//	    PreparedStatement pst;
	private JPanel contentPane;
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;
	private JTextField textField_3;
	private JTextField textField_4;

	/**
	 * Launch the application.
	 */
	//public static void main(String[] args) {
		//EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					LaddBook frame = new LaddBook();
					jf.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
	//	});
	//}

	/**
	 * Create the frame.
	 */
	public void Random()
	{
		java.util.Random rd=new java.util.Random();
		textField.setText(""+rd.nextInt(1000+1));
	}
	public LaddBook() {
			//super ("New Book");
			initComponents();
			conn=connecrDb();
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setBounds(100, 100, 742, 417);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		jf.setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel_1 = new JLabel(" Book ID");
		lblNewLabel_1.setBounds(380, 39, 79, 14);
		lblNewLabel_1.setForeground(new Color(248, 248, 255));
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("New label");
		lblNewLabel_2.setBounds(39, 421, 46, -290);
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("Name ");
		lblNewLabel_3.setBounds(390, 85, 79, 14);
		lblNewLabel_3.setForeground(new Color(255, 250, 250));
		lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(lblNewLabel_3);
		
		JLabel lblNewLabel_4 = new JLabel("Publisher ");
		lblNewLabel_4.setBounds(372, 165, 87, 25);
		lblNewLabel_4.setForeground(new Color(255, 250, 250));
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(lblNewLabel_4);
		
		JLabel lblNewLabel_5 = new JLabel("Price");
		lblNewLabel_5.setBounds(380, 203, 69, 25);
		lblNewLabel_5.setForeground(new Color(255, 250, 250));
		lblNewLabel_5.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(lblNewLabel_5);
		
		JLabel lblNewLabel_6 = new JLabel("Edition");
		lblNewLabel_6.setBounds(380, 129, 79, 19);
		lblNewLabel_6.setForeground(new Color(255, 250, 250));
		lblNewLabel_6.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(lblNewLabel_6);
		
		JComboBox comboBox = new JComboBox();
		comboBox.setBounds(469, 124, 225, 32);
		comboBox.setModel(new DefaultComboBoxModel(new String[] {"1", "2", "3", "4", "5", "6", "7", "8"}));
		contentPane.add(comboBox);
		
		JButton btnNewButton = new JButton("Add Book");
		btnNewButton.setBounds(469, 281, 225, 34);
		btnNewButton.setBackground(new Color(128, 0, 0));
		btnNewButton.setForeground(new Color(250, 235, 215));
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try {
					String sql=setsql("Insert into Book ( Book_ID,Name,Edition,Publisher,Price,Pages) Values (?,?,?,?,?,?)");
				     pst=conn.prepareStatement(sql);
				     String a,b,c,d,ek,ekn;
				     a=textField.getText();
				     b=textField_1.getText();
				     c=textField_2.getText();
				     d=(String)comboBox.getSelectedItem();
				      ek=textField_3.getText();
				     ekn=textField_4.getText();
					pst.setString(1,a);
					pst.setString(2,b);
					pst.setString(3,d);
			     	pst.setString(4,c); 
					pst.setString(5,ek);
					pst.setString(6,ekn);
					pst.execute();
					JOptionPane.showMessageDialog(null, "New Book Added");
					}
					catch(Exception ea)
					{
						JOptionPane.showMessageDialog(null, ea);
					}
				}
			
			
		});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("Back");
		btnNewButton_1.setBounds(469, 326, 225, 32);
		btnNewButton_1.setBackground(new Color(128, 0, 0));
		btnNewButton_1.setForeground(new Color(250, 235, 215));
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Smainmenu menu=new Smainmenu();
				menu.jf.setVisible(true);
				jf.dispose();
			}
		});
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(btnNewButton_1);
		
		textField = new JTextField();
		textField.setEditable(false);
		textField.setBounds(469, 31, 225, 34);
		contentPane.add(textField);
		textField.setColumns(10);
		Random();
		textField_1 = new JTextField();
		textField_1.setBounds(469, 82, 225, 25);
		contentPane.add(textField_1);
		textField_1.setColumns(10);
		
		textField_2 = new JTextField();
		textField_2.setBounds(469, 167, 225, 25);
		contentPane.add(textField_2);
		textField_2.setColumns(10);
		
		textField_3 = new JTextField();
		textField_3.setBounds(469, 203, 225, 29);
		contentPane.add(textField_3);
		textField_3.setColumns(10);
		
		textField_4 = new JTextField();
		textField_4.setBounds(469, 243, 225, 25);
		contentPane.add(textField_4);
		textField_4.setColumns(10);
		
		JLabel lblPages = new JLabel("Pages");
		lblPages.setForeground(new Color(250, 235, 215));
		lblPages.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblPages.setBounds(380, 248, 61, 20);
		contentPane.add(lblPages);
		
		JLabel label = new JLabel("");
		label.setBounds(-261, -145, 1024, 1024);
		contentPane.add(label);
		label.setIcon(new ImageIcon("E:\\image\\depositphotos_96367658-stock-photo-bookshelf-full-of-books-background.jpg"));
	}

	private void initComponents() {
		// TODO Auto-generated method stub
		
	}
}
