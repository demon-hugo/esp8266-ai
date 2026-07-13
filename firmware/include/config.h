#pragma once

// ---- Firmware version (shown on the first-time WiFi setup screen & /api/info) ----
#define FW_VERSION "0.4.6"

// ---- Bridge polling ----
#define BRIDGE_DEFAULT_PORT 8765
#define BRIDGE_DEFAULT_PATH "/status"
#define BRIDGE_POLL_INTERVAL_MS 5000
#define BRIDGE_HTTP_TIMEOUT_MS 3000

// ---- WiFiManager ----
#define WIFI_PORTAL_AP_NAME "AI-Clock-Setup"
#define WIFI_CONFIG_FILE "/bridge_host.txt"

// ---- Static WiFi network (Panabit DHCP diagnostic) ----
// Keep this enabled only while diagnosing the DHCP lease issue on Demon-ESP.
#define WIFI_STATIC_IP_ENABLED 1
#define WIFI_STATIC_IP_ADDR 192, 168, 1, 75
#define WIFI_STATIC_GATEWAY 192, 168, 1, 1
#define WIFI_STATIC_SUBNET 255, 255, 255, 0
#define WIFI_STATIC_DNS 192, 168, 1, 20

// ---- Backlight ----
#define BRIGHTNESS_FILE "/brightness.txt"
#define BRIGHTNESS_DEFAULT 100
#define BRIGHTNESS_PWM_FREQ 2000 // Hz; high enough to avoid visible flicker when dim

// ---- Display layout (240x240 ST7789) ----
#define SCREEN_W 240
#define SCREEN_H 240
