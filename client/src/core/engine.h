#ifndef _ENGINE_H_
#define _ENGINE_H_

class Engine{
private:
    bool m_isRunning = true;

    static Engine* s_instance;

    Engine(){   }

public:
    static Engine* getInstance() {
        if (s_instance == nullptr) {
            s_instance = new Engine();
        }
        return s_instance;
    }

    int avude = 0;

    void run();
};

#endif // _ENGINE_H_
