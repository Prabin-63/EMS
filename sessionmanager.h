#ifndef SESSIONMANAGER_H
#define SESSIONMANAGER_H

class SessionManager
{
public:
    // Singleton accessor
    static SessionManager& instance()
    {
        static SessionManager instance;
        return instance;
    }

    // Getter for currentEventId
    int currentEventId() const
    {
        return m_currentEventId;
    }

    // Setter for currentEventId
    void setCurrentEventId(int id)
    {
        m_currentEventId = id;
    }

    void setUserId(int id) { userId = id; }
    int getUserId() const { return userId; }

private:
    SessionManager() = default;  // private constructor for singleton

    int m_currentEventId = 0;
    int userId = -1;  // -1 = no user logged in
};

#endif // SESSIONMANAGER_H
