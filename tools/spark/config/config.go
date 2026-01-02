package config

import (
	"encoding/json"
	"io"
	"os"
)

type Config struct {
	Compiler           string `json:"compiler"`
	Categories         string `json:"categories"`
	IncludeDirectories string `json:"include_directories"`
}

// WithReader populates the Config by decoding JSON data from r.
// It expects r to contain a valid JSON object matching the Config schema.
// Any existing fields in the Config may be overwritten.
func (c *Config) WithReader(r io.Reader) error {
	err := json.NewDecoder(r).Decode(c)
	return err
}

// WithFilepath opens the file at path and populates the Config by decoding
// its JSON contents. The file must contain a valid JSON object matching
// the Config schema.
func (c *Config) WithFilepath(path string) error {
	f, err := os.Open(path)
	if err != nil {
		return err
	}
	defer f.Close()
	return c.WithReader(f)
}
