

namespace bzsf {

	template<typename ID, typename Context>
	class StateStack;

	template<typename ID, typename Context>
	class State {
	public:
		typedef std::unique_ptr<State> Ptr;

	private:
		typename StateStack<ID, Context>* stateStack;
		Context context;

	protected:
		void RequestStackPush(ID stateID);
		void RequestStackPop();
		void RequestStateClear();

		Context GetContext();

	public:
		State(StateStack<ID, Context>& stack, Context _context);
		virtual ~State();

		virtual void Draw(sf::RenderTarget& window, sf::RenderStates states = sf::RenderStates::Default) = 0;
		virtual bool Update(sf::Time& dt) = 0;
		virtual bool HandleEvent(const sf::Event& event) = 0;
	};

}


// Include implementaion
#include <BZeps-SFML-Snippets\snippets\state.inl>