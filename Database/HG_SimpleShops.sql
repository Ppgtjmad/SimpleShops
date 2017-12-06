SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET TIME_ZONE = "+00:00";

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

CREATE DATABASE IF NOT EXISTS `HG` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;
USE `HG`; -- ! IMPORTANT ! --

--
-- Table structure for table `HG_Players`
--

CREATE TABLE IF NOT EXISTS `HG_Players` (
  `ID` MEDIUMINT NOT NULL AUTO_INCREMENT,
  `PID` VARCHAR(32) NOT NULL,
  `Money` INT(100) NOT NULL DEFAULT '0',
  `Bank` INT(100) NOT NULL DEFAULT '0',
  `XP` TEXT NOT NULL,
  `Kills` INT(100) NOT NULL DEFAULT '0',
  `Gear` TEXT NOT NULL,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `PID` (`PID`)
) ENGINE = InnoDB DEFAULT CHARSET = utf8;

-- --------------------------------------------------------

--
-- Table structure for table `HG_Vehicles`
--

CREATE TABLE IF NOT EXISTS `HG_Vehicles` (
  `ID` MEDIUMINT NOT NULL AUTO_INCREMENT,
  `PID` VARCHAR(50) NOT NULL,
  `Classname` VARCHAR(32) NOT NULL,
  `Plate` INT(100) NOT NULL,
  `Alive` TINYINT NOT NULL DEFAULT 1,
  `Active` TINYINT NOT NULL,
  `Color` VARCHAR(32) NOT NULL,
  `Inventory` TEXT NOT NULL,
  PRIMARY KEY (`ID`),
  KEY `PID` (`PID`),
  KEY `Classname` (`Classname`),
  KEY `Plate` (`Plate`)
) ENGINE = InnoDB DEFAULT CHARSET = utf8;

-- --------------------------------------------------------

--
-- Table structure for table `HG_Whitelist`

CREATE TABLE IF NOT EXISTS `HG_Whitelist` (
  `Civilian` TEXT NOT NULL,
  `West` TEXT NOT NULL,
  `Resistance` TEXT NOT NULL,
  `East` TEXT NOT NULL
) ENGINE = InnoDB DEFAULT CHARSET = utf8;

INSERT INTO `HG_Whitelist` (
  `Civilian`,
  `West`,
  `Resistance`,
  `East`
) VALUES ('[]','[]','[]','[]');

-- --------------------------------------------------------

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
