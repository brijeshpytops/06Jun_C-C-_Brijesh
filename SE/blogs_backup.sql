-- MySQL dump 10.13  Distrib 8.0.39, for Win64 (x86_64)
--
-- Host: localhost    Database: blogs
-- ------------------------------------------------------
-- Server version	8.0.39

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `comments`
--

DROP TABLE IF EXISTS `comments`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `comments` (
  `comment_id` int NOT NULL AUTO_INCREMENT,
  `content` text NOT NULL,
  `post_id` int NOT NULL,
  `user_id` int NOT NULL,
  `created_at` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`comment_id`),
  KEY `post_id` (`post_id`),
  KEY `user_id` (`user_id`),
  CONSTRAINT `comments_ibfk_1` FOREIGN KEY (`post_id`) REFERENCES `posts` (`post_id`),
  CONSTRAINT `comments_ibfk_2` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=51 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `comments`
--

LOCK TABLES `comments` WRITE;
/*!40000 ALTER TABLE `comments` DISABLE KEYS */;
INSERT INTO `comments` VALUES (2,'Very informative, thanks for sharing.',1,2,'2024-10-18 07:56:30'),(3,'I agree with your point about databases.',1,3,'2024-10-18 07:56:30'),(7,'Thanks for the explanation on SQL.',3,2,'2024-10-18 07:56:30'),(8,'Can you share more about indexing?',3,4,'2024-10-18 07:56:30'),(9,'This content is top-notch.',3,1,'2024-10-18 07:56:30'),(10,'Looking forward to your next post.',4,3,'2024-10-18 07:56:30'),(11,'Hello World programs are a classic start!',4,5,'2024-10-18 07:56:30'),(12,'I have a different opinion on REST APIs.',4,2,'2024-10-18 07:56:30'),(13,'Well explained!',5,3,'2024-10-18 07:56:30'),(14,'This coding journey sounds similar to mine.',5,4,'2024-10-18 07:56:30'),(15,'Good job!',5,1,'2024-10-18 07:56:30'),(16,'Please elaborate on database design.',6,2,'2024-10-18 07:56:30'),(17,'Advanced SQL concepts can be tricky.',6,5,'2024-10-18 07:56:30'),(18,'I also started with Hello World.',6,3,'2024-10-18 07:56:30'),(19,'Good insights on web development.',7,1,'2024-10-18 07:56:30'),(20,'The explanation on REST APIs was clear.',7,4,'2024-10-18 07:56:30'),(21,'Nice post about coding journey.',7,2,'2024-10-18 07:56:30'),(22,'Could you share more resources?',8,1,'2024-10-18 07:56:30'),(23,'Great advice on starting a blog.',8,5,'2024-10-18 07:56:30'),(24,'The details on indexing are useful.',8,3,'2024-10-18 07:56:30'),(25,'I am learning so much from these posts.',9,4,'2024-10-18 07:56:30'),(26,'Thanks for discussing advanced SQL.',9,2,'2024-10-18 07:56:30'),(27,'This was very detailed.',9,1,'2024-10-18 07:56:30'),(28,'I found this helpful for my project.',10,3,'2024-10-18 07:56:30'),(29,'This helped me understand databases better.',10,5,'2024-10-18 07:56:30'),(30,'Thanks for sharing your coding experiences.',10,4,'2024-10-18 07:56:30'),(31,'Looking forward to more SQL topics.',1,2,'2024-10-18 07:56:30'),(32,'Great insights into web development.',1,3,'2024-10-18 07:56:30'),(35,'Thanks for these explanations.',3,4,'2024-10-18 07:56:30'),(36,'Very detailed post.',3,1,'2024-10-18 07:56:30'),(37,'I would love to learn more.',4,2,'2024-10-18 07:56:30'),(38,'This helped clear my doubts.',4,3,'2024-10-18 07:56:30'),(39,'Web development can be challenging.',5,4,'2024-10-18 07:56:30'),(40,'I enjoyed reading this post.',5,5,'2024-10-18 07:56:30'),(41,'I can relate to your coding journey.',6,1,'2024-10-18 07:56:30'),(42,'Thanks for sharing.',6,2,'2024-10-18 07:56:30'),(43,'I want to see more content on SQL.',7,3,'2024-10-18 07:56:30'),(44,'Your posts are helpful.',7,5,'2024-10-18 07:56:30'),(45,'Please explain more about REST APIs.',8,4,'2024-10-18 07:56:30'),(46,'The explanation on indexing was useful.',9,2,'2024-10-18 07:56:30'),(47,'This content is really good.',10,1,'2024-10-18 07:56:30'),(48,'Advanced topics are well covered.',10,3,'2024-10-18 07:56:30'),(49,'I appreciate the practical examples.',1,4,'2024-10-18 07:56:30');
/*!40000 ALTER TABLE `comments` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `posts`
--

DROP TABLE IF EXISTS `posts`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `posts` (
  `post_id` int NOT NULL AUTO_INCREMENT,
  `title` varchar(255) NOT NULL,
  `content` text NOT NULL,
  `user_id` int NOT NULL,
  `created_at` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`post_id`),
  KEY `user_id` (`user_id`),
  CONSTRAINT `posts_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `posts`
--

LOCK TABLES `posts` WRITE;
/*!40000 ALTER TABLE `posts` DISABLE KEYS */;
INSERT INTO `posts` VALUES (1,'My First Post','This is the content of my first post.',1,'2024-10-18 07:54:22'),(2,'Learning SQL','SQL is a powerful language for managing databases.',2,'2024-10-18 07:54:22'),(3,'Web Development','Web development involves both front-end and back-end work.',3,'2024-10-18 07:54:22'),(4,'Database Design','Designing a database requires careful planning.',4,'2024-10-18 07:54:22'),(5,'Hello World','Hello world programs are often the first step in learning programming.',5,'2024-10-18 07:54:22'),(6,'My Second Post','Continuing my blogging journey with another post.',1,'2024-10-18 07:54:22'),(7,'Advanced SQL','Exploring more advanced SQL concepts and queries.',2,'2024-10-18 07:54:22'),(8,'REST APIs','RESTful APIs are commonly used in web development.',3,'2024-10-18 07:54:22'),(9,'Indexing in Databases','Indexing helps improve the speed of database queries.',4,'2024-10-18 07:54:22'),(10,'My Coding Journey','Sharing my experiences and challenges while learning to code.',5,'2024-10-18 07:54:22');
/*!40000 ALTER TABLE `posts` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `users`
--

DROP TABLE IF EXISTS `users`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `users` (
  `user_id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(100) NOT NULL,
  `email` varchar(100) NOT NULL,
  `password` varchar(200) NOT NULL,
  PRIMARY KEY (`user_id`),
  UNIQUE KEY `email` (`email`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `users`
--

LOCK TABLES `users` WRITE;
/*!40000 ALTER TABLE `users` DISABLE KEYS */;
INSERT INTO `users` VALUES (1,'Alice Johnson','alice.johnson@example.com','password123'),(2,'Bob Smith','bob.smith@example.com','password456'),(3,'Charlie Brown','charlie.brown@example.com','password789'),(4,'David Wilson','david.wilson@example.com','password321'),(5,'Eve Adams','eve.adams@example.com','password654'),(6,'Frank Thomas','frank.thomas@example.com','password987'),(7,'Grace Lee','grace.lee@example.com','password111'),(8,'Henry Miller','henry.miller@example.com','password222'),(9,'Ivy Davis','ivy.davis@example.com','password333'),(10,'Jack Taylor','jack.taylor@example.com','password444');
/*!40000 ALTER TABLE `users` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-10-21 13:27:31
