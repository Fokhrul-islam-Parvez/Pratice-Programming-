package packageLab3;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JRadioButton;
import javax.swing.JButton;
import javax.swing.JTextField;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.Color;

public class RadioButton extends JFrame {

	private JPanel contentPane;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					RadioButton frame = new RadioButton();
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
	public RadioButton() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBackground(new Color(75, 0, 130));
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JRadioButton button1 = new JRadioButton("Male");
		button1.setBounds(41, 36, 109, 23);
		contentPane.add(button1);
		
		JRadioButton button2 = new JRadioButton("Female");
		button2.setBounds(41, 82, 109, 23);
		contentPane.add(button2);
		
		JRadioButton button3 = new JRadioButton("Common");
		button3.setBounds(41, 124, 109, 23);
		contentPane.add(button3);
		button1.addActionListener(new ActionListener() {
		public void actionPerformed(ActionEvent e) {
		if(button1.isSelected())
		{
			button2.setSelected(false);
			button3.setSelected(false);
		}
		}
		});
		button2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
		if(button2.isSelected())
		{
			button1.setSelected(false);
			button3.setSelected(false);
		}
			}
		});
		button3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
		if(button3.isSelected())
		{
			button2.setSelected(false);
			button1.setSelected(false);
		}
		}
		});
		JButton btnNewButton = new JButton("Action");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if(button1.isSelected())
					JOptionPane.showMessageDialog(null, "You are a Male");
				else if(button2.isSelected())
					JOptionPane.showMessageDialog(null, "You are a Female");
				else
				{
					JOptionPane.showMessageDialog(null, "You are a Common");
				}
					
			}
		});
		btnNewButton.setBounds(232, 82, 89, 23);
		contentPane.add(btnNewButton);
	}
}
