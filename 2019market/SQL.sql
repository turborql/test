DROP TABLE IF EXISTS `sale`;
CREATE TABLE `sale` (
  `commodityname` varchar(45) NOT NULL,
  `commodityid` int(10) unsigned NOT NULL,
  `sellTime` datetime NOT NULL,
  `number` varchar(45) NOT NULL,
  `money` double NOT NULL,
  `operator` varchar(45) NOT NULL,
  `saleid` int(11) NOT NULL,
  `id` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312 PACK_KEYS=1;

NSERT INTO `sale` VALUES ('可乐', 1, '2019-10-10 00:00:00', '1', 2, 'lilei', 1, 1);
INSERT INTO `sale` VALUES ('雪碧', 2, '2019-10-10 00:00:00', '1', 3, 'lili', 2, 2);





DROP TABLE IF EXISTS `resale`;
CREATE TABLE `resale` (
  `commodityname` varchar(45) NOT NULL,
  `commodityid` int(10) unsigned NOT NULL,
  `sellTime` datetime NOT NULL,
  `number` varchar(45) NOT NULL,
  `money` double NOT NULL,
  `operator` varchar(45) NOT NULL,
  `saleid` int(11) NOT NULL,
  `id` int(11) NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=30 DEFAULT CHARSET=gb2312 PACK_KEYS=1;


INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 4);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 5);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 6);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 7);
INSERT INTO `resale` VALUES ('可乐', 1, '2019-09-23 00:00:00', '1', 2, 'lilei', 1, 8);

SET FOREIGN_KEY_CHECKS = 1;