#ifndef SESSIONMANAGER_H
#define SESSIONMANAGER_H

class SessionManager
{
public:
    static SessionManager& instance() {
        static SessionManager instance;
        return instance;
    }

    void setUserId(int id) { userId = id; }
    int getUserId() const { return userId; }

    void setEventId(int id) { eventId = id; }
    int getEventId() const { return eventId; }

private:
    SessionManager() = default;  // Private constructor for singleton

    int userId = -1;    // No user logged in by default
    int eventId = -1;   // No event selected by default
};

#endif // SESSIONMANAGER_H
