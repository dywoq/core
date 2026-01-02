package main

import (
	"fmt"
	"os"

	"github.com/spf13/cobra"
)

var rootCmd = &cobra.Command{
	Use:   "spark",
	Short: "spark is a test executor, specifically made for dywoq/cxx.",
	Long: `spark is a test executor written in Go,
which is specifically made for C++ standard library dywoq/cxx.
Repository: github.com/dywoq/cxx/tools/spark`,
	Run: func(cmd *cobra.Command, args []string) {},
}

func main() {
	if err := rootCmd.Execute(); err != nil {
		fmt.Fprintf(os.Stderr, "Failed to run command: %v", err)
		os.Exit(1)
	}
}
