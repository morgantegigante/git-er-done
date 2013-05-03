void statistics()
{
    
    totalTemp = totalTemp + currentTemp; //sums the current temperatures, updates each iteration
   
    // max temperature achieved - update if current temp trumps past max temp
   if (currentTemp > maxTemp)
   {
    maxTemp = currentTemp;
   } 
    
    // average temperature per stage
    
    if (stage == 1)
    {
      count_p = count_p+1;
      temp_p = temp_p + currentTemp;
    }
    if (stage == 2)
    {
      count_s = count_s+1;
      temp_s = temp_s + currentTemp;
    }
    if (stage == 3)
    {
      count_r = count_r+1;
      temp_r = temp_r + currentTemp;
    }
    if (stage == 4)
    {
      count_c = count_c+1;
      temp_c = temp_c + currentTemp;
    }
    
    //error calculation
    unsigned long error = currentTemp - Setpoint;
    unsigned long square_error = pow(error, 2);
    sq_error_sum = sq_error_sum + square_error;
}

void calc() //calculates statistics once the reflow oven is done, and final count value is used to get averages
{
  //average temp overall
  avg = totalTemp/count;
  //average temp for each stage
  avg_p = temp_p/count_p;
  avg_s = temp_s/count_s;
  avg_r = temp_r/count_r;
  avg_c = temp_c/count_c;
  // square error calculation
  unsigned long avg_sq_error = sq_error_sum/count;
  rms_error = sqrt(avg_sq_error);
}

