bool front_is_beeper()
{
    if (front_is_blocked()) return false;
    set_step_delay(0);
    step();
    if (beepers_present())
    {
        turn_left();
        turn_left();
        step();
        turn_left();
        turn_left();
        set_step_delay(SPEED);
        return true;
    }
    else
    {
        turn_left();
        turn_left();
        step();
        turn_left();
        turn_left();
        set_step_delay(SPEED);
        return false;
    }

}
