void add_image_actors()
{
    int x = 20;
    int y = 0;
    gdouble angle = 0;
    GSList *list = list_items;
    while (list)
    {
        Item *item = (Item*)list->data;
        ClutterActor *actor = item->actor;
        clutter_actor_show (actor);
        list = g_slist_next (list);
    }
}
gdouble angle_in_360(gdouble angle)
{
    gdouble result = angle;
    while(result >= 360)    result -= 360;
    return result;
}
