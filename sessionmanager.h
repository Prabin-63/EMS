#ifndef SESSIONMANAGER_H
#define SESSIONMANAGER_H

class SessionManager
{
public:
    static SessionManager& instance()
    {
        static SessionManager instance;
        return instance;
    }

    void setUserId(int id) { userId = id; }
    int getUserId() const { return userId; }

private:
    SessionManager() = default;
    int userId = -1;  // -1 = no user logged in
};

#endif // SESSIONMANAGER_H
