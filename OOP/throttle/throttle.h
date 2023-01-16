#ifndef MAIN_BDOG_THROTTLE
#define MAIN_BDOG_THROTTLE

namespace main_bdog_2A
{
    class throttle
    {
    public:
        throttle();
        throttle(int size);

        void shut_off() { position = 0; }
        void shift(int amount);

        double flow() const { return position / double(top_position); }
        bool is_on() const { return (position > 0); }
    private:
        int top_position;
        int position;
    };
}

#endif