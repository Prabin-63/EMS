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
    SessionManager() = default;

    int userId = -1;
    int eventId = -1;
};

#endif // SESSIONMANAGER_H
