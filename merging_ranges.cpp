vector<Interval> merge_intervals(vector<Interval> intervals_list)
{
    if (!intervals_list.size()) return intervals_list;
    
    vector<Interval> out;
    
    // lambda
    auto rule = [](Interval in1, Interval in2) -> bool
    {
        return in1.start < in2.start;
    };

    sort(intervals_list.begin(), intervals_list.end(), rule);
    
    Interval prev = intervals_list[0];
    for (int i = 1; i < intervals_list.size(); i++)
    {
        if (intervals_list[i].start <= intervals_list[i-1].end)
        {
            prev = Interval(prev.start, max(prev.end, intervals_list[i].end));
        }
        else
        {
            out.push_back(prev);
            prev = intervals_list[i];
        }
    }
    out.push_back(prev);
    return out;
}