package config

import (
	"encoding/json"
	"io"
)

type Config struct {
	Compiler   string `json:"compiler"`
	Categories string `json:"categories"`
}

// WithReader decodes bytes from r into Config structure.
// Returns an error if it fails.
func WithReader(r io.Reader) (*Config, error) {
	c := &Config{}
	err := json.NewDecoder(r).Decode(&c)
	return c, err
}
