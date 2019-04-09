import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.ImageIcon;
import java.awt.Color;
import javax.swing.JTextField;
import org.eclipse.wb.swing.FocusTraversalOnArray;
import java.awt.Component;

public class Smainmenu {
	static JFrame jf=new JFrame("Main Menu");

	private JPanel contentPane;

	/**
	 * Launch the application.
	 */
	//public static void main(String[] args) {
		//EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Smainmenu frame = new Smainmenu();
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
	public Smainmenu() {
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setBounds(100, 100, 802, 528);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		jf.setContentPane(contentPane);
		
		JButton btnNewButton = new JButton("Add Book");
		btnNewButton.setBounds(279, 168, 241, 32);
		btnNewButton.setForeground(new Color(250, 235, 215));
		btnNewButton.setBackground(new Color(128, 0, 0));
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 15));
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				LaddBook add = new LaddBook();
				add.jf.setVisible(true);
				jf.dispose();
			}
		});
		contentPane.setLayout(null);
		contentPane.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("New Student");
		btnNewButton_1.setBounds(279, 226, 241, 32);
		btnNewButton_1.setBackground(new Color(128, 0, 0));
		btnNewButton_1.setForeground(new Color(250, 235, 215));
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				jf.setVisible(false);
				NewStudent nw=new NewStudent();
				nw.jf.setVisible(true);
				
			}
		});
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("Issu Book");
		btnNewButton_2.setBounds(279, 279, 241, 32);
		btnNewButton_2.setBackground(new Color(139, 0, 0));
		btnNewButton_2.setForeground(new Color(250, 235, 215));
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				jf.setVisible(false);
				Issu obj=new Issu();
				obj.jf.setVisible(true);
			}
		});
		btnNewButton_2.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(btnNewButton_2);
		
		JButton btnNewButton_3 = new JButton("About");
		btnNewButton_3.setBounds(279, 380, 241, 32);
		btnNewButton_3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				jf.setVisible(false);
				About ab=new About();
				ab.	setVisible(true);
			}
		});
		btnNewButton_3.setBackground(new Color(128, 0, 0));
		btnNewButton_3.setForeground(new Color(250, 235, 215));
		btnNewButton_3.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(btnNewButton_3);
		
		JButton btnNewButton_4 = new JButton("Return Book");
		btnNewButton_4.setBounds(279, 337, 241, 32);
		btnNewButton_4.setBackground(new Color(128, 0, 0));
		btnNewButton_4.setForeground(new Color(250, 235, 215));
		btnNewButton_4.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				returnBook book = new returnBook();
				book.jf.setVisible(true);
				jf.dispose();
			}
		});
		btnNewButton_4.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(btnNewButton_4);
		
		JButton btnNewButton_5 = new JButton("Logout");
		btnNewButton_5.setBounds(279, 423, 241, 34);
		btnNewButton_5.setBackground(new Color(128, 0, 0));
		btnNewButton_5.setForeground(new Color(250, 235, 215));
		btnNewButton_5.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				System.exit(0);
			}
		});
		btnNewButton_5.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(btnNewButton_5);
		
		JLabel lblNewLabel = new JLabel("A Library is a hospital");
		lblNewLabel.setBounds(240, 54, 332, 32);
		lblNewLabel.setBackground(new Color(128, 0, 0));
		lblNewLabel.setForeground(new Color(255, 255, 224));
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 30));
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_2 = new JLabel("for the MIND...");
		lblNewLabel_2.setBounds(298, 84, 274, 34);
		lblNewLabel_2.setBackground(new Color(128, 0, 0));
		lblNewLabel_2.setForeground(new Color(250, 235, 215));
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 30));
		contentPane.add(lblNewLabel_2);
		
		JLabel label = new JLabel("");
		label.setBounds(-91, 0, 900, 500);
		contentPane.add(label);
		label.setIcon(new ImageIcon("E:\\image\\900.png"));
		jf.setFocusTraversalPolicy(new FocusTraversalOnArray(new Component[]{contentPane, btnNewButton, btnNewButton_1, btnNewButton_2, btnNewButton_3, btnNewButton_4, btnNewButton_5, lblNewLabel, lblNewLabel_2, label}));
	}
}
