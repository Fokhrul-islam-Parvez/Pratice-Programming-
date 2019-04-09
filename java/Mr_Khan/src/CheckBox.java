import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.CompoundBorder;
import javax.swing.border.BevelBorder;
import java.awt.Color;
import javax.swing.JRadioButton;
import javax.swing.JCheckBox;
import javax.swing.JTextField;
import javax.swing.JLabel;
import javax.swing.AbstractButton;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JTextArea;
import javax.swing.JComboBox;
import java.awt.Font;
import java.awt.SystemColor;

public class CheckBox {

	private JFrame frame;
	private JTextField tex;
	private JTextField total;
	private JTextField sub_total;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					CheckBox window = new CheckBox();
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
	public CheckBox() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setBackground(new Color(128, 0, 0));
		frame.getContentPane().setForeground(new Color(75, 0, 130));
		frame.setBounds(100, 100, 577, 349);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JPanel panel = new JPanel();
		panel.setBackground(SystemColor.menu);
		panel.setBounds(25, 60, 225, 130);
		panel.setBorder(new CompoundBorder(new BevelBorder(BevelBorder.LOWERED, new Color(255, 175, 175), null, null, null), null));
		frame.getContentPane().add(panel);
		
		JRadioButton input1rad = new JRadioButton("Dirty Laundry 5.6 $       ");
		input1rad.setFont(new Font("Tahoma", Font.BOLD, 11));
		panel.add(input1rad);

		JRadioButton input2rad = new JRadioButton("Vanilla Spice Pure\u00E9 3.9 $");
		input2rad.setFont(new Font("Tahoma", Font.BOLD, 11));
		panel.add(input2rad);
		
		JRadioButton input3rad = new JRadioButton("Sweet Rainbow  4.7 $   ");
		input3rad.setFont(new Font("Tahoma", Font.BOLD, 11));
		panel.add(input3rad);
		
		JRadioButton input4rad = new JRadioButton("Spice Cadet 2.7 $        ");
		input4rad.setFont(new Font("Tahoma", Font.BOLD, 11));
		panel.add(input4rad);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBounds(281, 62, 245, 130);
		panel_1.setBorder(new BevelBorder(BevelBorder.LOWERED, Color.PINK, null, null, null));
		frame.getContentPane().add(panel_1);
		
		JCheckBox input1che = new JCheckBox("Chicken Sandwich 3.90 $");
		input1che.setFont(new Font("Tahoma", Font.BOLD, 11));
		panel_1.add(input1che);
		
		JCheckBox input2che = new JCheckBox("Bacon Cheeseburger 11.2 $");
		input2che.setFont(new Font("Tahoma", Font.BOLD, 11));
		panel_1.add(input2che);
		
		JCheckBox input3che = new JCheckBox("Soft Tacos 8.32 $");
		input3che.setFont(new Font("Tahoma", Font.BOLD, 11));
		panel_1.add(input3che);
		
		JCheckBox input4che = new JCheckBox("Chicken Sandwich 6.00 $");
		input4che.setFont(new Font("Tahoma", Font.BOLD, 11));
		panel_1.add(input4che);
		
		JLabel lblNewLabel = new JLabel(" Sub Total :");
		lblNewLabel.setForeground(new Color(240, 255, 255));
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel.setBounds(332, 216, 73, 14);
		frame.getContentPane().add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Tex :");
		lblNewLabel_1.setForeground(new Color(245, 255, 250));
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_1.setBounds(373, 247, 32, 14);
		frame.getContentPane().add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Total :");
		lblNewLabel_2.setForeground(new Color(245, 245, 245));
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_2.setBounds(359, 282, 46, 14);
		frame.getContentPane().add(lblNewLabel_2);
		
		JButton calculation = new JButton("Calculation");
		calculation.setFont(new Font("Tahoma", Font.BOLD, 13));
		calculation.setBounds(58, 227, 118, 23);
		calculation.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				double total1,tex2;
				final double tex1= .15;
				double subtotal=0;
				if(input1rad.isSelected()){
					subtotal=subtotal+5.6;}
				else if(input2rad.isSelected()){
					subtotal=subtotal+3.9;}
				else if(input3rad.isSelected()){
					subtotal=subtotal+4.7;}
				else if(input4rad.isSelected()){
					subtotal=subtotal+2.7;}
				if(input1che.isSelected()){
					subtotal=subtotal+3.90;
				}
				if(input2che.isSelected()){
					subtotal=subtotal+11.2;
				}
				if(input3che.isSelected()){
					subtotal=subtotal+8.32;
				}
				if(input4che.isSelected()){
					subtotal=subtotal+6.00;
				}
				sub_total.setText(Double.toString(subtotal));
				tex2=subtotal*tex1;
				tex.setText(Double.toString(tex2));
				total1=subtotal+tex2;
				total.setText(total1 +" "+'$');
			}
		});
		frame.getContentPane().add(calculation);
		
		JButton exit = new JButton("Exit");
		exit.setFont(new Font("Tahoma", Font.BOLD, 13));
		exit.setBounds(127, 259, 78, 23);
		exit.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				System.exit(0);
			}
		});
		frame.getContentPane().add(exit);
		JButton resetjfile = new JButton("Reset");
		resetjfile.setFont(new Font("Tahoma", Font.BOLD, 13));
		resetjfile.setBounds(25, 259, 89, 23);
		resetjfile.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				input2rad.setSelected(false);
				input1rad.setSelected(false);
				input3rad.setSelected(false);
				input4rad.setSelected(false);
				input1che.setSelected(false);
				input2che.setSelected(false);
				input3che.setSelected(false);
				input4che.setSelected(false);
				sub_total.setText(" ");
				tex.setText(" ");
				total.setText(" ");
			}
		});
		input1rad.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if(input1rad.isSelected())
				{
					input2rad.setSelected(false);
					input3rad.setSelected(false);
					input4rad.setSelected(false);
				}
			}
			});
		input2rad.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if(input2rad.isSelected())
				{
					input1rad.setSelected(false);
					input3rad.setSelected(false);
					input4rad.setSelected(false);
				}
			}
			});
		input3rad.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if(input3rad.isSelected())
				{
					input1rad.setSelected(false);
					input2rad.setSelected(false);
					input4rad.setSelected(false);
				}
			}
			});
		input4rad.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if(input4rad.isSelected())
				{
					input1rad.setSelected(false);
					input3rad.setSelected(false);
					input2rad.setSelected(false);
				}
			}
			});

		
		frame.getContentPane().add(resetjfile);
		
		JLabel lblNewLabel_3 = new JLabel("");
		lblNewLabel_3.setBounds(58, 21, 268, 14);
		frame.getContentPane().add(lblNewLabel_3);
		
		tex = new JTextField();
		tex.setBounds(440, 244, 86, 20);
		frame.getContentPane().add(tex);
		tex.setColumns(10);
		
		total = new JTextField();
		total.setBounds(440, 279, 86, 20);
		frame.getContentPane().add(total);
		total.setColumns(10);
		
		sub_total = new JTextField();
		sub_total.setBounds(440, 213, 86, 20);
		frame.getContentPane().add(sub_total);
		sub_total.setColumns(10);
	}
}
