#ifndef SURVIVE_HOOK_PROCESS_DEF
#define SURVIVE_HOOK_PROCESS_DEF(name)
#endif

#ifndef SURVIVE_HOOK_FEEDBACK_DEF
#define SURVIVE_HOOK_FEEDBACK_DEF(name)
#endif

// See the documentation in the typedef section of survive_types.h for the usage and meaning of these.
SURVIVE_HOOK_PROCESS_DEF(new_object)
SURVIVE_HOOK_PROCESS_DEF(printf)
SURVIVE_HOOK_PROCESS_DEF(log)
SURVIVE_HOOK_PROCESS_DEF(report_error)

SURVIVE_HOOK_PROCESS_DEF(config)
SURVIVE_HOOK_PROCESS_DEF(gen_detected)

// Gen 1 hooks
SURVIVE_HOOK_PROCESS_DEF(lightcap)
SURVIVE_HOOK_PROCESS_DEF(light)
SURVIVE_HOOK_PROCESS_DEF(light_pulse)
SURVIVE_HOOK_PROCESS_DEF(angle)

// Gen 2 hook
SURVIVE_HOOK_PROCESS_DEF(sync)
SURVIVE_HOOK_PROCESS_DEF(sweep)
SURVIVE_HOOK_PROCESS_DEF(sweep_angle)

SURVIVE_HOOK_PROCESS_DEF(raw_imu)
SURVIVE_HOOK_PROCESS_DEF(imu)
SURVIVE_HOOK_PROCESS_DEF(button)

SURVIVE_HOOK_PROCESS_DEF(imupose)
SURVIVE_HOOK_PROCESS_DEF(pose)
SURVIVE_HOOK_PROCESS_DEF(velocity)

SURVIVE_HOOK_PROCESS_DEF(external_pose)
SURVIVE_HOOK_PROCESS_DEF(external_velocity)
SURVIVE_HOOK_PROCESS_DEF(lighthouse_pose)

#undef SURVIVE_HOOK_PROCESS_DEF
#undef SURVIVE_HOOK_FEEDBACK_DEF
