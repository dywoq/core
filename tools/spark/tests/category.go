package test

type CategoryConfig struct {
	Name       string   `json:"name"`
	TestFiles  []string `json:"test_files"`
	Categories string   `json:"categories"`
}
