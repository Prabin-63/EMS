
# Eventra: Event Management System

A Qt/C++ desktop application designed to simplify the management of events, sub-events, and volunteers through an intuitive and offline-capable interface.

## Project Context

This project was developed as the final assignment for the second semester of the Computer Engineering program at Kathmandu University. Eventra demonstrates practical knowledge in desktop application development using the Qt framework and C++, with a focus on database handling, user interface design, and real-world usability. The project reflects an effort to build a complete solution that helps users organize and participate in events effectively.

## Overview

Eventra is a user-friendly desktop application that allows administrators to create, edit, and schedule events and sub-events, while regular users can view and book those events. The system supports volunteer registration and automatic distribution to sub-events, enabling smooth coordination. It operates fully offline using SQLite as its database, ensuring that users can access features without needing an internet connection.

## Features

- **Event and Sub-event Scheduling:** Admins can schedule events and divide them into sub-events with specific dates, times, and locations. The system prevents time/location conflicts.
- **Volunteer Management:** Volunteers can be added to the system and automatically assigned to sub-events based on availability.
- **User Accounts:** Users can sign up, log in securely, and book available events. Passwords are protected using SHA-256 hashing.
- **Admin Dashboard:** Admins have access to tools for managing users, volunteers, events, and sub-events from a central interface.
- **Offline Usage:** Eventra uses SQLite, enabling all core features to work without internet access.

## Technologies Used

- **Qt Framework (C++):** For GUI design and event-driven logic.
- **SQLite:** For lightweight, embedded database storage.

## Setup & Usage

1. Clone or download the project repository.
2. Open the project in Qt Creator or Visual Studio (Qt extension required).
3. Ensure the required database and resource files are correctly placed.
4. Build and run the application.
5. Sign up or log in as a user or admin.
6. Start creating events, assigning volunteers, or booking slots.

## Future Enhancements

- Integration with LAN or cloud services for real-time multi-user access.
- Smarter volunteer assignment using rules or AI matching.
- Role-based access control for better security.
- Mobile app version for Android/iOS platforms.


## Conclusion

Eventra is a complete, offline event management tool tailored for small to medium organizations looking to streamline their scheduling and volunteer coordination processes. The project serves as a practical demonstration of using C++ and Qt to solve real-world problems, focusing on usability, reliability, and data management. It lays the foundation for future work that could include cloud integration, advanced automation, and cross-platform deployment.


