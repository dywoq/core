package test

type Standard string

type Type string

type Test struct {
	Name            string   `json:"name"`
	FullPath        string   `json:"full_path"`
	Standard        Standard `json:"standard"`
	AdditionalFlags []string `json:"additional_flags"`
	Type            Type     `json:"type"`
}

const (
	StandardCxx20 Standard = "cxx20"
)

const (
	TypeCompilePass Standard = "compile-pass"
	TypeCompileFail Standard = "compile-fail"
	TypePass        Standard = "pass"
	TypeFail        Standard = "fail"
)
