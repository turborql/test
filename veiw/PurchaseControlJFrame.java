package com.banyuan.veiw;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.border.EmptyBorder;
import javax.swing.table.DefaultTableModel;

public class PurchaseControlJFrame extends JFrame implements ActionListener {

	private JPanel contentPane;
	private JTable table;
	private JTextField tfNum;
	private JTextField tfperson;
	private JTextField tfCount;
	private JTextField tfgoodsSum;
	private JTextField tftime;
	private JTextField tfmomeySum;
	private Vector data;
	private Vector colname;
	private DefaultTableModel tm;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					PurchaseControlJFrame frame = new PurchaseControlJFrame();
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
	public PurchaseControlJFrame() {
		setTitle("进货单");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 870, 586);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);

		JPanel panel = new JPanel();
		panel.setBounds(6, 216, 858, 329);
		contentPane.add(panel);
		panel.setLayout(null);

		JScrollPane scrollPane = new JScrollPane();
		scrollPane.setBounds(6, 6, 846, 317);
		panel.add(scrollPane);

		tm = new DefaultTableModel(data, colname);

		table = new JTable();
		scrollPane.setViewportView(table);

		JPanel panel_1 = new JPanel();
		panel_1.setBounds(6, 6, 858, 211);
		contentPane.add(panel_1);
		panel_1.setLayout(null);

		JLabel label = new JLabel("商品编号");
		label.setBounds(24, 17, 61, 16);
		panel_1.add(label);

		tfNum = new JTextField();
		tfNum.setBounds(97, 12, 130, 26);
		panel_1.add(tfNum);
		tfNum.setColumns(10);

		JLabel label_1 = new JLabel("进货员");
		label_1.setBounds(24, 55, 61, 16);
		panel_1.add(label_1);

		tfperson = new JTextField();
		tfperson.setBounds(97, 50, 130, 26);
		panel_1.add(tfperson);
		tfperson.setColumns(10);

		JLabel label_2 = new JLabel("商品数量");
		label_2.setBounds(308, 17, 61, 16);
		panel_1.add(label_2);

		JLabel label_3 = new JLabel("货品总数");
		label_3.setBounds(308, 54, 61, 16);
		panel_1.add(label_3);

		tfCount = new JTextField();
		tfCount.setBounds(388, 12, 130, 26);
		panel_1.add(tfCount);
		tfCount.setColumns(10);

		tfgoodsSum = new JTextField();
		tfgoodsSum.setBounds(388, 49, 130, 26);
		panel_1.add(tfgoodsSum);
		tfgoodsSum.setColumns(10);

		JLabel label_4 = new JLabel("入库时间");
		label_4.setBounds(597, 17, 61, 16);
		panel_1.add(label_4);

		JLabel label_5 = new JLabel("合计金额");
		label_5.setBounds(597, 54, 61, 16);
		panel_1.add(label_5);

		tftime = new JTextField();
		tftime.setBounds(683, 12, 130, 26);
		panel_1.add(tftime);
		tftime.setColumns(10);

		tfmomeySum = new JTextField();
		tfmomeySum.setBounds(683, 49, 130, 26);
		panel_1.add(tfmomeySum);
		tfmomeySum.setColumns(10);

		JButton Button_add = new JButton("添加");
		Button_add.addActionListener(this);
		Button_add.setBounds(157, 140, 117, 29);
		panel_1.add(Button_add);

		JButton Button_putin = new JButton("入库");
		Button_putin.addActionListener(this);
		Button_putin.setBounds(355, 140, 117, 29);
		panel_1.add(Button_putin);

		JButton Button_giveup = new JButton("放弃入库");
		Button_giveup.addActionListener(this);
		Button_giveup.setBounds(565, 140, 117, 29);
		panel_1.add(Button_giveup);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		tfNum.getText();
		tfperson.getText();
		tfCount.getText();
		tfgoodsSum.getText();
		tftime.getText();
		tfmomeySum.getText();

	}
}
