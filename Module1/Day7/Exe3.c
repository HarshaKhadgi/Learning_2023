#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
};

int readLogFile(struct LogEntry logEntries[]) {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    char *token;
    int entryCount = 0;

    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 0;
    }

    // Read each line from the file and store it in the logEntries array
    while (fgets(line, sizeof(line), file)) {
        token = strtok(line, ",");
        logEntries[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].timestamp, token);

        entryCount++;
    }

    fclose(file);
    return entryCount;
}

void displayLogEntries(struct LogEntry logEntries[], int entryCount) {
    int i;

    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Timestamp\n");
    printf("--------------------------------------------------------\n");
    for (i = 0; i < entryCount; i++) {
        printf("%-8d %-9s %-12.1f %-9d %-6d %s\n",
               logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity,
               logEntries[i].light, logEntries[i].timestamp);
    }
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int entryCount;

    entryCount = readLogFile(logEntries);
    if (entryCount > 0) {
        displayLogEntries(logEntries, entryCount);
    } else {
        printf("No log entries found.\n");
    }

    return 0;
}
