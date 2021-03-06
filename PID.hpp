#ifndef PID_H_
#define PID_H_


class PID
{
public:
	PID( const ros::NodeHandle &nh_ );
	~PID();
	void init(const ros::NodeHandle &nh);
	void setInput( double u );
	void updateState( double dt );
	double getOutput( void );

private:
	double P, I, D, N;	// Regelparameter
	double x[2];		// Zustand
	double y;			// Ausgang
	double u;			// Eingang
	const ros::NodeHandle nh;

};

#endif