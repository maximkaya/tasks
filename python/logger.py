import datetime
import sys

class Logger:
    def __init__(self, out_stream=sys.stderr, time_formatter="%Y-%m-%d %H:%M:%S"):
        self.out_stream = out_stream
        self.time_formatter = time_formatter

    def log(self, message):
        current_time = datetime.datetime.now()
        current_time_str = current_time.strftime(self.time_formatter)
        print(f"[{current_time_str}] {message}", file=self.out_stream)

def main():
    out_stream = sys.stderr
    time_formatter = "%Y-%m-%d %H:%M:%S"
    logger = Logger(out_stream, time_formatter)
    logger.log("Hello, world!")
    return 0

if __name__ == "__main__":
    sys.exit(main())