#!/usr/bin/env python2

import yaml
import rospy
from std_msgs.msg import String


if __name__ == '__main__':

    with open("../config/params.yaml", 'r') as stream:
        try:
            params_content = yaml.load(stream)

            # Getting all of the params content
            rgb_topic = params_content["rgb_topic"]
            results_topic = params_content["results_topic"]
            namespace = params_content["namespace"]

        except yaml.YAMLError as exc:
            print(exc)
