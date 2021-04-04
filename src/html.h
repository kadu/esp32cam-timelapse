#include <Arduino.h>

String getHTML() {
  String html = "<!DOCTYPE html>";
  html += "<html>";
  html += "  <head>";
  html += "    <title>ESP32 Cam Pan & Tilt</title>";
  html += "    <meta charset=\"utf-8\" />";
  html += "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">";
  html += "    <link rel=\"stylesheet\" href=\"https://cdnjs.cloudflare.com/ajax/libs/pure/2.0.5/pure-min.css\" crossorigin=\"anonymous\">";
  html += "    <style>";
  html += "    </style>";
  html += "  </head>";
  html += "  <body>";
  html += "    <h1>ESP32Cam Pan & Tilt Configurations</h1>";
  html += "    <form class=\"pure-form pure-form-aligned\">";
  html += "      <fieldset>";
  html += "          <legend>Pan & Tilt</legend>";
  html += "          <div class=\"pure-control-group\">";
  html += "            <label for=\"pan\">Pan</label>";
  html += "            <input type=\"text\" placeholder=\"90\" id=\"pan\" class=\"pure-input-rounded\"/>";
  html += "          </div>";
  html += "          <div class=\"pure-control-group\">";
  html += "            <label for=\"pan\">Tilt</label>";
  html += "            <input type=\"text\" placeholder=\"90\" id=\"tilt\" class=\"pure-input-rounded\"/>";
  html += "          </div>";
  html += "          <div class=\"pure-controls\">";
  html += "            <button type=\"submit\" class=\"pure-button pure-button-primary\">Change</button>";
  html += "          </div>";
  html += "      </fieldset>";
  html += "    </form>";
  html += "";
  html += "    <form class=\"pure-form pure-form-aligned\">";
  html += "      <fieldset>";
  html += "          <legend>Configuration</legend>";
  html += "          <div class=\"pure-control-group\">";
  html += "            <label for=\"host\">Server Host</label>";
  html += "            <input type=\"text\" placeholder=\"192.168.11.160\" id=\"host\" class=\"pure-input-rounded\"/>";
  html += "          </div>";
  html += "          <div class=\"pure-control-group\">";
  html += "            <label for=\"path\">Server Path</label>";
  html += "            <input type=\"text\" placeholder=\"/upload\" id=\"path\" class=\"pure-input-rounded\"/>";
  html += "          </div>";
  html += "          <div class=\"pure-control-group\">";
  html += "            <label for=\"port\">Server Port</label>";
  html += "            <input type=\"text\" placeholder=\"3001\" id=\"port\" class=\"pure-input-rounded\"/>";
  html += "          </div>";
  html += "          <div class=\"pure-control-group\">";
  html += "            <label for=\"interval\">Picture interval (minutes)</label>";
  html += "            <input type=\"text\" placeholder=\"1\" id=\"interval\" class=\"pure-input-rounded\"/>";
  html += "          </div>";
  html += "          <div class=\"pure-controls\">";
  html += "            <button type=\"submit\" class=\"pure-button pure-button-primary\">Save</button>";
  html += "          </div>";
  html += "      </fieldset>";
  html += "    </form>";
  html += "  </body>";
  html += "</html>";

  return html;
}

