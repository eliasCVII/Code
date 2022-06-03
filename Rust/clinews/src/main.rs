fn get_articles(url: &url) {
    let response = ureq::get("http://example.com");
}

fn main() {
    let url: &str = "https://newsapi.org/v2/top-headlines?country=us&category=business&apiKey=API_KEY";
    let articles: () = get.articles(url);
}
