
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