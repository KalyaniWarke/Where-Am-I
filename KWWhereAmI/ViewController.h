//
//  ViewController.h
//  KWWhereAmI
//
//  Created by Kalyani on 12/10/16.
//  Copyright © 2016 kalyani Warke. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
@interface ViewController : UIViewController<MKMapViewDelegate,CLLocationManagerDelegate>
{
    CLLocationManager *myLocationManager;
    
}
@property (strong, nonatomic) IBOutlet MKMapView *myMapView;

- (IBAction)actionStartDetectingLocation:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *labelLatitude;
@property (strong, nonatomic) IBOutlet UILabel *labelLongitude;
@property (strong, nonatomic) IBOutlet UILabel *labelAltitude;
@property (strong, nonatomic) IBOutlet UILabel *labelSpeed;
- (IBAction)changeMapType:(id)sender;

@end

